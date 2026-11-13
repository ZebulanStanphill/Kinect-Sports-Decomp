/* hkMemoryTrackStreamReader::isOk (vtable ??_7hkMemoryTrackStreamReader@@6B@ slot 3): the read
   position is still inside the track. The hkBool result is returned through r3. */
typedef struct Track_82CFF598 {
    int bytesPerSector;     /* 0x00 */
    int bytesLastSector;    /* 0x04 */
    char **sectors;         /* 0x08 */
    int numSectors;         /* 0x0c */
} Track_82CFF598;

typedef struct Reader_82CFF598 {
    void *vtable;
    int refCount;
    Track_82CFF598 *track;  /* 0x08 */
    int pos;                /* 0x0c */
} Reader_82CFF598;

static __forceinline int Track_getSize(const Track_82CFF598 *track)
{
    return (track->numSectors - 1) * track->bytesPerSector + track->bytesLastSector;
}

void fn_82CFF598(char *result, const Reader_82CFF598 *self)
{
    *result = Track_getSize(self->track) >= self->pos;
}
