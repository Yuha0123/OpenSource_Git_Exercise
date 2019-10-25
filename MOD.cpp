int MOD(int a, int b)
{
	int result;

	if (b != 0)
		result = a % b;
	else
		result = 0;

	return result;
}