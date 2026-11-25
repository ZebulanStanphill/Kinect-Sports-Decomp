extern unsigned char fn_8275CF90(float x0, float y0, float x1, float y1, float x2, float y2, float x,
                                 float y);

unsigned char fn_8275F028(float x0, float y0, float x1, float y1, float x2, float y2, float x, float y)
{
    if (y1 >= y0 && y1 <= y2) {
        return fn_8275CF90(x0, y0, x1, y1, x2, y2, x, y);
    } else {
        float denominator = 2.0f * y1 - y0 - y2;
        float t = denominator == 0.0f ? -1.0f : (y1 - y0) / denominator;
        float ax = x0 + (x1 - x0) * t;
        float bx = x1 + (x2 - x1) * t;
        float ay = y0 + (y1 - y0) * t;
        float by = y1 + (y2 - y1) * t;
        float midX = ax + (bx - ax) * t;
        float midY = ay + (by - ay) * t;
        float startX = x0;
        float startY = y0;
        float leftEndX = midX;
        float leftEndY = midY;
        float rightStartX = midX;
        float rightStartY = midY;
        int right;
        int left;

        if (y0 > midY) {
            startX = midX;
            leftEndX = x0;
            startY = midY;
            leftEndY = y0;
        }
        if (midY > y2) {
            rightStartX = x2;
            rightStartY = y2;
            x2 = midX;
            y2 = midY;
        }
        right = fn_8275CF90(rightStartX, rightStartY, bx, by, x2, y2, x, y);
        left = fn_8275CF90(startX, startY, ax, ay, leftEndX, leftEndY, x, y);
        return left != right;
    }
}
