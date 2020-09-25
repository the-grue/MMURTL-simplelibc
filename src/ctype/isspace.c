/*********************************************
* Determine if a character is a whitespace
* (space, ff, lf, cr, tab, vtab)
**********************************************/

int isspace(int chr)
{
return  ((chr == ' ')  ||
		 (chr == '\f') ||
		 (chr == '\r') ||
		 (chr == '\n') ||
		 (chr == '\t') ||
		 (chr == 0x0B));
}
