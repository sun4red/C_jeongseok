#include <stdio.h>

#define EMAIL "ask@codechobo.com"

int main(void)
{
    char ch = 65; // char ch = 'A';
    char email[] = "ask@codechobo.com";

    int i = 0xFF; // 10진수로 255, 8진수로 377
    long long ll = 12345678901234LL;

    unsigned ui = 0xFFFFffff;
    unsigned long long ull = 0xFFFFffffFFFFffffLL;

    printf("ch='%c', %d\n", ch, ch);
    printf("i=%d, %x, %X, %#X, %o, %#o\n", i, i, i, i, i, i);
    printf("ll=%lld\n", ll); // long long 타입 %lld

    printf("ui=%u, %#x, %d\n", ui, ui, ui); // unsigned 에는 %d 가 아닌 %u
    printf("ull=%llu, %#llx, %11d\n", ull, ull, ull);

    printf("\"Hello, world\"\n");
    printf("ask me, EMAIL please.\n");
    printf("ask me, " EMAIL " please.\n");
    printf("ask me, %s please.\n", email);

    printf("[1234567890]\n");
    printf("[%s]\n", email);
    printf("[%20s]\n", email);
    printf("[%-20s]\n", email);
    printf("[%.8s]\n", email);

    return 0;
}
