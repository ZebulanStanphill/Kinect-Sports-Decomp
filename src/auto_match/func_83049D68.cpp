struct State_83049D68 {
    int unknown0; /* 0x0 */
    int unknown4; /* 0x4 */
    int position; /* 0x8 */
    int unknownC; /* 0xc */
};

struct Stream_83049D68 {
    virtual void Slot0();
    virtual void Slot1();
    virtual void Slot2();
    virtual void GetState(State_83049D68 *state);
    virtual void SetState(State_83049D68 *state);
    virtual void Slot5();
    virtual void Slot6();
    virtual void Slot7();
    virtual void Slot8();
    virtual void Slot9();
    virtual int Seek(__int64 offset, int origin, unsigned __int64 *newPosition);
};

struct Player_83049D68 {
    char pad00[0x1c];
    unsigned short loops; /* 0x1c */
    char pad1e[0xe];
    Stream_83049D68 *stream; /* 0x2c */
    int offset;              /* 0x30 */
    unsigned int played;     /* 0x34 */
    char pad38[0x1c];
    unsigned int loopStart; /* 0x54 */
    unsigned int loopEnd;   /* 0x58 */
    char pad5c[0x20];
    unsigned char finished; /* 0x7c */
    char pad7d;
    unsigned char loopCount; /* 0x7e */
};

extern "C" int fn_83049D68(Player_83049D68 *self, unsigned int amount)
{
    State_83049D68 state;
    unsigned __int64 newPosition;
    unsigned __int64 loopStart;
    self->played = amount + self->played;
    if (self->played >= self->loopEnd) {
        switch (self->loops) {
        case 1:
            self->stream->GetState(&state);
            state.position = 0;
            self->stream->SetState(&state);
            self->finished = 1;
            break;
        default:
            if (self->loops != 0) {
                self->loops--;
            }
            self->loopCount++;
            loopStart = self->loopStart;
            if (self->stream->Seek(loopStart, 0, &newPosition) != 1) {
                return 2;
            }
            self->played = (unsigned int)loopStart - self->loopStart;
            self->offset = (unsigned int)loopStart - (unsigned int)newPosition;
            break;
        }
    }
    return 1;
}
