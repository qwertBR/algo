def sdown(j):
    global h
    global s
    if 2 * j == len(h) - 1:
        if h[j] < h[2*j]:
            h[j], h[2 * j] = h[2 * j], h[j]
            s += 1
            return 0
    else:
        if 2 * j + 1 <= len(h) - 1:
            if h[j] < h[2*j] and h[2*j] >= h[2*j + 1]:
                h[j], h[2*j] = h[2*j], h[j]
                s += 1
                sdown(2*j)
            elif h[j] < h[2*j + 1] and h[2*j] < h[2*j + 1]:
                h[j], h[2 * j + 1] = h[2 * j + 1], h[j]
                s += 1
                sdown(2*j + 1)
            else:
                return 0
        else:
            return 0


def sup(j):
    global h
    global s
    if j >= 2:
        if h[j // 2] < h[j]:
            h[j // 2], h[j] = h[j], h[j // 2]
            s += 1
            sup(j // 2)
    else:
        return 0
