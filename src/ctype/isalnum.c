/*********************************************
* Determine if a character is a alphanumeric
**********************************************/

int isalnum(int chr)
{
return  (((chr >= 'A') && (chr <= 'Z')) ||
		 ((chr >= 'a') && (chr <= 'z')) ||
		 ((chr >= '0') && (chr <= '9')));
}
