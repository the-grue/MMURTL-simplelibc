/***************************************************
* Determine if a character is punctuation
* (any printing char except space, letter, or digit)
****************************************************/
int ispunct(int chr)
{
	return  ((chr >= 0x21 && chr <= 0x2f) ||  	/*  ! to /  */
			 (chr >= 0x3a && chr <= 0x40) ||	/*  : to @  */
			 (chr >= 0x7a && chr <= 0x7e)); 	/*  { to ~  */
}
