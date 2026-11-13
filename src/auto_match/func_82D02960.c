typedef struct LargeBlockAllocator_82D02960 {
    void *vt;
    int m_a, m_b, m_c;
    void *m_top;
    int m_e;
    void *m_bins[32];
    void *m_server;
    int m_g;
    int m_h;
    void *m_next, *m_prev;
    int m_other[4];
    int m_last, m_end;
} LargeBlockAllocator_82D02960;

void fn_82D02960(LargeBlockAllocator_82D02960 *self)
{
    int i;
    self->m_end = 0;
    self->m_last = 0;
    self->m_b = 0;
    self->m_c = 0;
    for (i = 0; i < 32; ++i) self->m_bins[i] = 0;
    self->m_prev = &self->m_next;
    self->m_h = 3;
    self->m_g = 0;
    self->m_top = &self->m_g;
    self->m_e = 0;
    self->m_next = &self->m_next;
}
