typedef struct { int a, b, c; } E12;

typedef struct Bufpar_8266EC00 {
    E12 *begin;
    E12 *current;
    E12 *hiwater;
    int size;
} Bufpar_8266EC00;

typedef struct TempIterator_8266EC00 {
    Bufpar_8266EC00 buf;
    Bufpar_8266EC00 *pbuf;
} TempIterator_8266EC00;

extern void fn_8266E560(E12 *first, E12 *last, int n, TempIterator_8266EC00 *buf);
extern void fn_8266D440(TempIterator_8266EC00 *buf);

void fn_8266EC00(E12 *first, E12 *last)
{
    int count = last - first;
    TempIterator_8266EC00 tmp;

    tmp.buf.begin = 0;
    tmp.buf.current = 0;
    tmp.buf.hiwater = 0;
    tmp.buf.size = (count + 1) / 2;
    tmp.pbuf = &tmp.buf;
    fn_8266E560(first, last, count, &tmp);
    fn_8266D440(&tmp);
}
