/***************************************************
* Determine if char is a hex digit (0-9, a-f, A-F)
****************************************************/
int isxdigit(int chr)
{
	return  (chr >= '0' && chr <= '9') ||
			(chr >= 'a' && chr <= 'f') ||
			(chr >= 'A' && chr <= 'F');
}
