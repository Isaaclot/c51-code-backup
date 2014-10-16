void Delay10ms (unsigned int c)	 //¶¨ÒåÑÓ³Ùº¯Êý
{
	unsigned char a,b,d ;
	for ( d=c ; d>0 ;d-- )
		for ( b=38 ; b>0 ; b-- )
			for ( a = 130 ; a>0 ; a-- );
}