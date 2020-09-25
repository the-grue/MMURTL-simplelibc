/***************************************************
* Determine if a character is printable ASCII
* (eg, char graphics)
****************************************************/
int isgraph(int chr)
{
	return (chr >= 0x21 && chr <= 0x7e);
}
