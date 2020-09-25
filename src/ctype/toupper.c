/************************************************
* Make char UPPER CASE
*************************************************/
int toupper(int chr)
{
	if ((chr >= 'a') && (chr <= 'z'))
		return (chr - 0x20);
	return(chr);
}
