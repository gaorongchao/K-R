use strict;
use warnings;


my @array;
my $n=10;

for (my $i=0;$i<$n;$i++)
{
	for (my $j=0;$j<$n;$j++)
	{
		if ($i>=$j)
		{
			$array[$i][$j]=($j+1)*($n-$i);
		}
		else
		{
			$array[$i][$j]=($i+1)*($n-$j);
		}
	}
}


my	$out_out = "test_result.txt";
open  my $out, '>', $out_out or die  "Fail open $out_out\n";
foreach my $k (0..$n-1)
{
	foreach my $l (0..$n-1)
	{
		print $out "$array[$k][$l],";
	}
	print $out "\n";
}
close  $out;
