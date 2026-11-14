/* CRT _strnicmp ("C" locale path; strnicmp sibling of Matching fn_82F899E8). */
int fn_82F6B058(const char *a, const char *b, unsigned int count)
{
    int ca;
    int cb;

    if (count) {
        do {
            ca = *(const unsigned char *)a++;
            if (ca >= 'A' && ca <= 'Z') {
                ca += 0x20;
            }
            cb = *(const unsigned char *)b++;
            if (cb >= 'A' && cb <= 'Z') {
                cb += 0x20;
            }
        } while (--count && ca && ca == cb);
        return ca - cb;
    }
    return 0;
}
