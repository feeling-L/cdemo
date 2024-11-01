int my_strlen(char* str){
	/*int count = 0;
	while (*str != '\0') {
		printf("%c\n", *str);
		count++;
		str++;
	}
	return count;*/

	if (*str != '\0')
		//return 1 + my_strlen(str++);
		return 1 + my_strlen(str+1);
	else
		return 0;
}