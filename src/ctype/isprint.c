/***************************************************
* Determine if a character is printable ASCII
* (eg, char graphics) or space
****************************************************/
int isprint(int chr)
{
	return (chr >= 0x20 && chr <= 0x7e);
}
