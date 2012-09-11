#!/usr/bin/perl

use DBI;
use Sys::Hostname;
use strict;
use warnings;

# =============================================================
#
#
#
# =============================================================
sub insert1
{
   my($line) = $_;
   chomp($line);
   
   print $line;
 
   my $query = $conn->prepare(
        "INSERT INTO storage.test_raw_input(date, raw_data, server_src)  ".
        " VALUES( 'now', '$line', '$host')"
        );
    $query->execute();
    undef($query);
}
# =============================================================
#
#
#
# =============================================================


my $host = hostname;
my $conn = DBI->connect('dbi:Pg:dbname=nci');
$conn->do("SET DateStyle = 'European'");


open(MYINPUTFILE, "</home/nadra/Desktop/POC/cjunit/nmu_poc/samples/sample_OK/nmu_sample_OK.nrr");

while(<MYINPUTFILE>){

   insert1
 }

$conn->disconnect();
$conn = undef;

