/************************************************
* Determine if a character is alphabetic
*************************************************/
int isalpha(int chr)
{
return  (((chr >= 'A') && (chr <= 'Z')) ||
		 ((chr >= 'a') && (chr <= 'z')));
}
