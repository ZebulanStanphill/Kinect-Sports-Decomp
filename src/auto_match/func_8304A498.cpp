struct Stream_8304A498 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c(); virtual void v10();
    virtual void v14(); virtual void v18(); virtual void v1c(); virtual void v20(); virtual void v24();
    virtual int Seek(unsigned __int64 pos, int origin, __int64 *newPos);
};
struct Reader_8304A498 {
    char pad0[0x2c];
    Stream_8304A498 *stream;
    int skip;
    int blockStart;
    unsigned int *blockEnds;
    int pad3c;
    int blockSize;
    unsigned int blockOffset;
    char pad48[0xc];
    int dataStart;
};
extern "C" __int64 fn_8304A498(Reader_8304A498 *self, unsigned int pos)
{
    unsigned int *ends = self->blockEnds;
    unsigned int block = 0;
    unsigned int prev;
    int start;
    unsigned __int64 target;
    __int64 got;
    while (pos > self->blockEnds[block]) block++;
    if (block != 0)
        prev = ends[block - 1];
    else
        prev = 0;
    start = self->blockSize * block;
    self->blockOffset = pos - prev;
    self->blockStart = start;
    target = (unsigned int)(self->dataStart + start);
    if (self->stream->Seek(target, 0, &got) != 1)
        return 2;
    self->skip = (int)(target - got);
    return 1;
}
