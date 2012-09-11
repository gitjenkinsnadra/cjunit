#!/usr/bin/perl

use DBI;
use Sys::Hostname;
use strict;
use warnings;
use Cwd;
use File::Find;
use File::Basename;

# =============================================================
# B E G I N
#
#
# =============================================================
my $host = hostname;
my $conn = DBI->connect('dbi:Pg:dbname=nci');
$conn->do("SET DateStyle = 'European'");
my $pwd = cwd();

# =============================================================
# insert_in_db
#
#
# =============================================================
sub insert_in_db
{
   my($mfile) = $_;
   
   open(MYINPUTFILE, "<$mfile");
   while(<MYINPUTFILE>){
     my($line) = $_;
     chomp($line);

       my $query = $conn->prepare(
       
          "INSERT INTO storage.test_raw_input(date, raw_data, server_src)  ".
          " VALUES( 'now', '$line', '$host')"
          
          );
          
       $query->execute();
       undef($query);    
  }
}

# =============================================================
# read_nrr
#
#
# =============================================================
sub read_nrr
{
  /\.nrr$/ or return;
  &insert_in_db ;
}

# =============================================================
# M A I N
#
#
# =============================================================
find(\&read_nrr, $pwd);

# =============================================================
# E N D
#
#
# =============================================================
chdir($pwd);
$conn->disconnect();
$conn = undef;



