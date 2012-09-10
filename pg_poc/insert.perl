#!/usr/bin/perl

use DBI;
use Sys::Hostname;


use strict;

my $host = hostname;

my $conn = DBI->connect('dbi:Pg:dbname=nci');

my (@row);

$conn->do("SET DateStyle = 'European'");

my $query = $conn->prepare(
    "INSERT INTO test_raw_input(date, raw_data, server_src)  ".
    " VALUES( 'now', 'a;b;c;d;', '$host')"
    );
$query->execute();

undef($query);
$conn->disconnect();
$conn = undef;


