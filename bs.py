def check(x):
    # your check


def bs():
    ll = 1
    r = 10000000000
    while r - ll > 1:
        m = (r + ll) // 2
        if check(m):
            ll = m
        else:
            r = m
    if check(ll):
        return ll
    else:
        return 0
