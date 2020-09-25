/*********************************************
* Determine if a character is control char
**********************************************/
int iscntrl(int chr)
{
	return chr >= 0 && chr <= 0x1f;
}
