use strict;
use warnings;

my $password = "crackme";

print "Enter password: ";
my $user_input = <STDIN>;
chomp $user_input;

if ($user_input eq $password) {
    print "success!\n";
} else {
    print "fail.\n";
}