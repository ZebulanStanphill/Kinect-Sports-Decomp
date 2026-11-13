// Kinect Sports retail 4D5308C9, function 0x8265FF20 (84 bytes).
// Calls fn_826600B8(self, fn_826603B0(first, last), first) and returns self.
extern void *fn_826603B0(void *, void *);
extern void fn_826600B8(void *, void *, void *);

void *fn_8265FF20(void *self, void *first, void *last)
{
    fn_826600B8(self, fn_826603B0(first, last), first);
    return self;
}
