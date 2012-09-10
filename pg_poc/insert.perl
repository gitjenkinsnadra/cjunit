#!/usr/bin/perl

use DBI;
use Sys::Hostname;
use strict;


my $host = hostname;
my $conn = DBI->connect('dbi:Pg:dbname=nci');
$conn->do("SET DateStyle = 'European'");


open(MYINPUTFILE, "</home/nadra/Desktop/POC/cjunit/nmu_poc/samples/sample_OK/nmu_sample_OK.nrr");

while(<MYINPUTFILE>){
 # Good practice to store $_ value because
 # subsequent operations may change it.
 my($line) = $_;

 # Good practice to always strip the trailing
 # newline from the line.
 chomp($line);

 
  my $query = $conn->prepare(
      "INSERT INTO storage.test_raw_input(date, raw_data, server_src)  ".
      " VALUES( 'now', '$line', '$host')"
      );
  $query->execute();

  undef($query);
 
}

$conn->disconnect();
$conn = undef;


