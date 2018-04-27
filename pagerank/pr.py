#!/usr/bin/env python
# encoding: utf-8

import sys

class Wiki2Matrix:
    def __init__(self):
        pass


    def kiir(self, k):
        for i in xrange(len(k)):
            print
            for j in xrange(len(k[i])):
                print "{},".format(k[i][j]),

    def kiir2(self, k):
        for i in xrange(len(k)):
            print
            o = 0

            for j in xrange(len(k[i])):
                print"{},".format(k[i][j]),
                o += k[i][j]

            sys.stdout.write(" {}".format(o))

        print
        print

        for i in xrange(len(k)):
            o = 0

            for j in xrange(len(k[i])):
                o += k[j][i]

            print o,


    def kiir3(self, k, oszlopOsszeg):
        for i in xrange(len(k)):
            print
            sys.stdout.write("{")

            for j in xrange(len(k[i])):
                if oszlopOsszeg[j] != 0:
                    print "{},".format(k[i][j] * (1.0/oszlopOsszeg[j])),
                else:
                    print "{},".format(k[i][j]),

            sys.stdout.write("},")


def main():
    kereszt = [ [0, 0, 0, 1, 0, 3, 2, 3, 3, 2, 0, 0, 0, 2, 2, 3],
                [3, 0, 2, 1, 3, 2, 0, 3, 3, 3, 0, 0, 0, 0, 0, 1],
                [1, 1, 0, 0, 3, 1, 3, 0, 0, 0, 3, 1, 1, 0, 2, 0],
                [0, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 2, 1, 1],
                [3, 3, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0],
                [1, 0, 3, 1, 0, 0, 0, 1, 3, 2, 0, 0, 0, 1, 2, 3],
                [0, 2, 0, 0, 0, 1, 0, 1, 1, 0, 3, 0, 1, 3, 3, 1],
                [0, 0, 1, 1, 3, 0, 0, 0, 0, 1, 3, 1, 1, 1, 3, 0],
                [0, 0, 1, 2, 3, 0, 0, 1, 0, 0, 0, 2, 1, 1, 3, 1],
                [0, 1, 1, 2, 0, 0, 3, 1, 1, 0, 0, 0, 0, 1, 3, 3],
                [2, 3, 0, 2, 1, 1, 0, 0, 1, 2, 0, 1, 0, 0, 0, 2],
                [3, 3, 0, 0, 0, 3, 3, 0, 2, 1, 1, 0, 2, 0, 0, 0],
                [1, 2, 0, 1, 0, 2, 1, 0, 0, 1, 3, 1, 0, 0, 0, 2],
                [2, 1, 2, 0, 1, 2, 1, 0, 0, 0, 3, 1, 1, 0, 0, 0],
                [1, 3, 1, 0, 2, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0],
                [0, 0, 1, 0, 1, 0, 3, 1, 1, 0, 0, 1, 2, 1, 3, 0] ]

    pontotSzerez = [ [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                     [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0] ]

    oszt = Wiki2Matrix()

    for i in xrange(len(pontotSzerez)):
        for j in xrange(len(pontotSzerez[i])):

            if kereszt[i][j] == 1:
                pontotSzerez[i][j] += 1

            elif kereszt[i][j] == 2:
                pontotSzerez[i][j] += 1
                pontotSzerez[j][i] += 1

            elif kereszt[i][j] == 3:
                pontotSzerez[j][i] += 1

            elif kereszt[i][j] == 0:
                pass

            else:
                print "Itt valami baj van.."

    print "Az x-pontot-szerez-y-tól mátrix"
    oszt.kiir(pontotSzerez)

    print "\nSor és oszlopösszegekkel"
    oszt.kiir2(pontotSzerez)

    osszegSzamlalo = []

    for i in xrange(len(pontotSzerez)):
        o = 0

        for j in xrange(len(pontotSzerez[i])):
            o += pontotSzerez[j][i]

        osszegSzamlalo.append(o)

    print 'A "link" mátrix'
    oszt.kiir3(pontotSzerez, osszegSzamlalo)



##############################################################################

if __name__ == "__main__":
    main()
