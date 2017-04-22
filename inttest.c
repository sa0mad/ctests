#include <stdio.h>
#include <limits.h>

int uchar_find_bits()
{
	unsigned char	a, a_prev;
	int	b;
	for (b = 0, a = 1, a_prev = 0; a > a_prev; a_prev = a, a *= 2, b++);
	return b;
}

unsigned char uchar_find_max()
{
	unsigned char	a, a_prev;
	for (a = 1, a_prev = 0; a > a_prev; a_prev = a, a = a*2 + 1);
	return a_prev;
}

unsigned char uchar_find_min()
{
	unsigned char	a, a_prev;
	for (a = 1, a_prev = 2; a < a_prev; a_prev = a, a--);
	return a_prev;
}

int schar_find_bits()
{
	signed char	a, a_prev;
	int	b, b_pos, b_neg;
	for (b = 0, a = 1, a_prev = 0; a > a_prev; a *= 2, b++);
	b_pos = b;
	for (b = 0, a = -1, a_prev = 0; a < a_prev; a *= 2, b++);
	b_neg = b;
	if (b_pos + 1 != b_neg)
		return 0;
	b = b_pos + 1;
	return b;
}

signed char schar_find_max()
{
	signed char	a, a_prev;
	for (a = 1, a_prev = 0; a > a_prev; a_prev = a, a = a*2+1);
	for (a = a_prev, a_prev--; a > a_prev; a_prev = a, a++);
	return a_prev;
}

signed char schar_find_min()
{
	signed char	a, a_prev;
	for (a = -1, a_prev = 0; a < a_prev; a_prev = a, a = a*2-1);
	for (a = a_prev, a_prev++; a < a_prev; a_prev = a, a--);
	return a_prev;
}

int char_find_bits()
{
	char	a, a_prev;
	int	b, b_pos, b_neg;
	for (b = 0, a = 1, a_prev = 0; a > a_prev; a *= 2, b++);
	b_pos = b;
	for (b = 0, a = -1, a_prev = 0; a < a_prev; a *= 2, b++);
	b_neg = b;
	if (b_pos + 1 != b_neg)
		return 0;
	b = b_pos + 1;
	return b;
}

char char_find_max()
{
	char	a, a_prev;
	for (a = 1, a_prev = 0; a > a_prev; a_prev = a, a = a*2+1);
	for (a = a_prev, a_prev--; a > a_prev; a_prev = a, a++);
	return a_prev;
}

char char_find_min()
{
	char	a, a_prev;
	for (a = -1, a_prev = 0; a < a_prev; a_prev = a, a = a*2-1);
	for (a = a_prev, a_prev++; a < a_prev; a_prev = a, a--);
	return a_prev;
}

int ushort_find_bits()
{
	unsigned short	a, a_prev;
	int	b;
	for (b = 0, a = 1, a_prev = 0; a > a_prev; a *= 2, b++);
	return b;
}

unsigned short ushort_find_max()
{
	unsigned short	a, a_prev;
	for (a = 1, a_prev = 0; a > a_prev; a_prev = a, a = a*2 + 1);
	return a_prev;
}

unsigned short ushort_find_min()
{
	unsigned short	a, a_prev;
	for (a = 1, a_prev = 2; a < a_prev; a_prev = a, a--);
	return a_prev;
}

int sshort_find_bits()
{
	signed short	a, a_prev;
	int	b, b_pos, b_neg;
	for (b = 0, a = 1, a_prev = 0; a > a_prev; a *= 2, b++);
	b_pos = b;
	for (b = 0, a = -1, a_prev = 0; a < a_prev; a *= 2, b++);
	b_neg = b;
	if (b_pos + 1 != b_neg)
		return 0;
	b = b_pos + 1;
	return b;
}

signed short sshort_find_max()
{
	signed short	a, a_prev;
	for (a = 1, a_prev = 0; a > a_prev; a_prev = a, a = a*2+1);
	for (a = a_prev, a_prev--; a > a_prev; a_prev = a, a++);
	return a_prev;
}

signed short sshort_find_min()
{
	signed short	a, a_prev;
	for (a = -1, a_prev = 0; a < a_prev; a_prev = a, a = a*2-1);
	for (a = a_prev, a_prev++; a < a_prev; a_prev = a, a--);
	return a_prev;
}

int short_find_bits()
{
	short	a, a_prev;
	int	b, b_pos, b_neg;
	for (b = 0, a = 1, a_prev = 0; a > a_prev; a *= 2, b++);
	b_pos = b;
	for (b = 0, a = -1, a_prev = 0; a < a_prev; a *= 2, b++);
	b_neg = b;
	if (b_pos + 1 != b_neg)
		return 0;
	b = b_pos + 1;
	return b;
}

short short_find_max()
{
	short	a, a_prev;
	for (a = 1, a_prev = 0; a > a_prev; a_prev = a, a = a*2+1);
	for (a = a_prev, a_prev--; a > a_prev; a_prev = a, a++);
	return a_prev;
}

short short_find_min()
{
	short	a, a_prev;
	for (a = -1, a_prev = 0; a < a_prev; a_prev = a, a = a*2-1);
	for (a = a_prev, a_prev++; a < a_prev; a_prev = a, a--);
	return a_prev;
}

int uint_find_bits()
{
	unsigned int	a, a_prev;
	int	b;
	for (b = 0, a = 1, a_prev = 0; a > a_prev; a *= 2, b++);
	return b;
}

unsigned int uint_find_max()
{
	unsigned int	a, a_prev;
	for (a = 1, a_prev = 0; a > a_prev; a_prev = a, a = a*2 + 1);
	return a_prev;
}

unsigned int uint_find_min()
{
	unsigned int	a, a_prev;
	for (a = 1, a_prev = 2; a < a_prev; a_prev = a, a--);
	return a_prev;
}

int int_find_bits()
{
	int	a, a_prev;
	int	b, b_pos, b_neg;
	for (b = 0, a = 1, a_prev = 0; a > a_prev; a *= 2, b++);
	b_pos = b;
	for (b = 0, a = -1, a_prev = 0; a < a_prev; a *= 2, b++);
	b_neg = b;
	if (b_pos + 1 != b_neg)
		return 0;
	b = b_pos + 1;
	return b;
}

int int_find_max()
{
	int	a, a_prev;
	for (a = 1, a_prev = 0; a > a_prev; a_prev = a, a = a*2+1);
	for (a = a_prev, a_prev--; a > a_prev; a_prev = a, a++);
	return a_prev;
}

int int_find_min()
{
	int	a, a_prev;
	for (a = -1, a_prev = 0; a < a_prev; a_prev = a, a = a*2-1);
	for (a = a_prev, a_prev++; a < a_prev; a_prev = a, a--);
	return a_prev;
}

int ulong_find_bits()
{
	unsigned long	a, a_prev;
	int	b;
	for (b = 0, a = 1, a_prev = 0; a > a_prev; a *= 2, b++);
	return b;
}

unsigned long ulong_find_max()
{
	unsigned long	a, a_prev;
	for (a = 1, a_prev = 0; a > a_prev; a_prev = a, a = a*2 + 1);
	return a_prev;
}

unsigned long ulong_find_min()
{
	unsigned long	a, a_prev;
	for (a = 1, a_prev = 2; a < a_prev; a_prev = a, a--);
	return a_prev;
}

int long_find_bits()
{
	long	a, a_prev;
	int	b, b_pos, b_neg;
	for (b = 0, a = 1, a_prev = 0; a > a_prev; a *= 2, b++);
	b_pos = b;
	for (b = 0, a = -1, a_prev = 0; a < a_prev; a *= 2, b++);
	b_neg = b;
	if (b_pos + 1 != b_neg)
		return 0;
	b = b_pos + 1;
	return b;
}

long long_find_max()
{
	long	a, a_prev;
	for (a = 1, a_prev = 0; a > a_prev; a_prev = a, a = a*2+1);
	for (a = a_prev, a_prev--; a > a_prev; a_prev = a, a++);
	return a_prev;
}

long long_find_min()
{
	long	a, a_prev;
	for (a = -1, a_prev = 0; a < a_prev; a_prev = a, a = a*2-1);
	for (a = a_prev, a_prev++; a < a_prev; a_prev = a, a--);
	return a_prev;
}

int ulonglong_find_bits()
{
	unsigned long long	a, a_prev;
	int	b;
	for (b = 0, a = 1, a_prev = 0; a > a_prev; a *= 2, b++);
	return b;
}

unsigned long long ulonglong_find_max()
{
	unsigned long long	a, a_prev;
	for (a = 1, a_prev = 0; a > a_prev; a_prev = a, a = a*2 + 1);
	return a_prev;
}

unsigned long long ulonglong_find_min()
{
	unsigned long long	a, a_prev;
	for (a = 1, a_prev = 2; a < a_prev; a_prev = a, a--);
	return a_prev;
}

int longlong_find_bits()
{
	long long	a, a_prev;
	int	b, b_pos, b_neg;
	for (b = 0, a = 1, a_prev = 0; a > a_prev; a *= 2, b++);
	b_pos = b;
	for (b = 0, a = -1, a_prev = 0; a < a_prev; a *= 2, b++);
	b_neg = b;
	if (b_pos + 1 != b_neg)
		return 0;
	b = b_pos + 1;
	return b;
}

long long longlong_find_max()
{
	long long	a, a_prev;
	for (a = 1, a_prev = 0; a > a_prev; a_prev = a, a = a*2+1);
	for (a = a_prev, a_prev--; a > a_prev; a_prev = a, a++);
	return a_prev;
}

long long longlong_find_min()
{
	long long	a, a_prev;
	for (a = -1, a_prev = 0; a < a_prev; a_prev = a, a = a*2-1);
	for (a = a_prev, a_prev++; a < a_prev; a_prev = a, a--);
	return a_prev;
}

int main()
{
	int		uchar_bits = uchar_find_bits();
	unsigned char	uchar_min  = uchar_find_min();
	unsigned char	uchar_max  = uchar_find_max();
	int		schar_bits = schar_find_bits();
	signed char	schar_min  = schar_find_min();
	signed char	schar_max  = schar_find_max();
	int		char_bits = char_find_bits();
	char		char_min  = char_find_min();
	char		char_max  = char_find_max();
	int		ushort_bits = ushort_find_bits();
	unsigned short	ushort_min  = ushort_find_min();
	unsigned short	ushort_max  = ushort_find_max();
	int		sshort_bits = sshort_find_bits();
	signed short	sshort_min  = sshort_find_min();
	signed short	sshort_max  = sshort_find_max();
	int		short_bits = short_find_bits();
	short		short_min  = short_find_min();
	short		short_max  = short_find_max();
	int		uint_bits = uint_find_bits();
	unsigned int	uint_min  = uint_find_min();
	unsigned int	uint_max  = uint_find_max();
	int		int_bits = int_find_bits();
	int		int_min  = int_find_min();
	int		int_max  = int_find_max();
	int		ulong_bits = ulong_find_bits();
	unsigned long	ulong_min  = ulong_find_min();
	unsigned long	ulong_max  = ulong_find_max();
	int		long_bits = long_find_bits();
	long		long_min  = long_find_min();
	long		long_max  = long_find_max();
	int		ulonglong_bits = ulonglong_find_bits();
	unsigned long long	ulonglong_min  = ulonglong_find_min();
	unsigned long long	ulonglong_max  = ulonglong_find_max();
	int		longlong_bits = longlong_find_bits();
	long long	longlong_min  = longlong_find_min();
	long long	longlong_max  = longlong_find_max();
	
	printf("unsigned char      bits %2i min %20u max %20u\n", uchar_bits, uchar_min, uchar_max);
	if (uchar_bits != CHAR_BIT)
		printf("unsigned char does not match CHAR_BITS\n");
	if (uchar_min != 0)
		printf("unsigned char does not match 0\n");
	if (uchar_max != UCHAR_MAX)
		printf("unsigned char does not match UCHAR_MAX\n");
	printf("signed char        bits %2i min %20i max %20i\n", schar_bits, schar_min, schar_max);
	if (schar_bits != CHAR_BIT)
		printf("signed char does not match CHAR_BITS\n");
	if (schar_min != SCHAR_MIN)
		printf("signed char does not match SCHAR_MIN\n");
	if (schar_max != SCHAR_MAX)
		printf("signed char does not match SCHAR_MAX\n");
	printf("char               bits %2i min %20i max %20i\n", char_bits, char_min, char_max);
	if (char_bits != CHAR_BIT)
		printf("char does not match CHAR_BITS\n");
	if (char_min != CHAR_MIN)
		printf("char does not match CHAR_MIN\n");
	if (char_max != CHAR_MAX)
		printf("char does not match CHAR_MAX\n");
	printf("unsigned short     bits %2i min %20u max %20u\n", ushort_bits, ushort_min, ushort_max);
	if (ushort_min != 0)
		printf("unsigned short does not match 0\n");
	if (ushort_max != USHRT_MAX)
		printf("unsigned short does not match USHRT_MAX %i\n", USHRT_MAX);
	printf("signed short       bits %2i min %20i max %20i\n", sshort_bits, sshort_min, sshort_max);
	printf("short              bits %2i min %20i max %20i\n", short_bits, short_min, short_max);
	if (short_min != SHRT_MIN)
		printf("short does not match SHRT_MIN %i\n", SHRT_MIN);
	if (short_max != SHRT_MAX)
		printf("short does not match SHRT_MAX %i\n", SHRT_MAX);
	printf("unsigned int       bits %2i min %20u max %20u\n", uint_bits, uint_min, uint_max);
	if (uint_min != 0)
		printf("unsigned int does not match 0\n");
	if (uint_max != UINT_MAX)
		printf("unsigned int does not match UINT_MAX %i\n", UINT_MAX);
	printf("int                bits %2i min %20i max %20i\n", int_bits, int_min, int_max);
	if (int_min != INT_MIN)
		printf("int does not match INT_MIN %i\n", INT_MIN);
	if (int_max != INT_MAX)
		printf("int does not match INT_MAX %i\n", INT_MAX);
	printf("ulong              bits %2i min %20lu max %20lu\n", ulong_bits, ulong_min, ulong_max);
	if (ulong_min != 0)
		printf("unsigned long does not match 0\n");
	if (ulong_max != ULONG_MAX)
		printf("unsigned long does not match ULONG_MAX %lu\n", ULONG_MAX);
	printf("long               bits %2i min %20li max %20li\n", long_bits, long_min, long_max);
	if (long_min != LONG_MIN)
		printf("long does not match LONG_MIN %li\n", LONG_MIN);
	if (long_max != LONG_MAX)
		printf("long does not match LONG_MAX %li\n", LONG_MAX);
	printf("unsigned long long bits %2i min %20llu max %20llu\n", ulonglong_bits, ulonglong_min, ulonglong_max);
	if (ulonglong_min != 0)
		printf("unsigned long long does not match 0\n");
	if (ulonglong_max != ULLONG_MAX)
		printf("unsigned long long does not match ULLONG_MAX %llu\n", ULLONG_MAX);
	printf("long long          bits %2i min %20lli max %20lli\n", longlong_bits, longlong_min, longlong_max);
	if (longlong_min != LLONG_MIN)
		printf("long long does not match LONGLONG_MIN %lli\n", LLONG_MIN);
	if (longlong_max != LLONG_MAX)
		printf("long long does not match LONGLONG_MAX %lli\n", LLONG_MAX);
	return 0;
}
