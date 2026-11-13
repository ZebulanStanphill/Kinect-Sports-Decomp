/* hkFreeListAllocator vtable (??_7hkFreeListAllocator@@6B@) slot 9: updates the peak in-use
   byte count and tells whether numBytes more stay under the soft limit. */
typedef struct Allocator_82CF8EC0 {
    char pad0[0x20];
    unsigned int freeBytes;     /* 0x20 */
    unsigned int peakInUse;     /* 0x24 */
    char pad28[0xec - 0x28];
    unsigned int totalBytes;    /* 0xec */
    char padF0[0x8fc - 0xf0];
    unsigned int softLimit;     /* 0x8fc */
} Allocator_82CF8EC0;

unsigned char fn_82CF8EC0(Allocator_82CF8EC0 *self, unsigned int numBytes)
{
    unsigned int inUse = self->totalBytes - self->freeBytes;

    self->peakInUse = inUse > self->peakInUse ? inUse : self->peakInUse;
    return inUse < self->softLimit - numBytes;
}
