set xrange [0:0.26]
set grid
set xlabel "1/n"
mu = 2
sigma2 = 2.25
sx = 0
kx = 15.1875
plot \
kx-3*sigma2**2 notitle, \
"< tail -10 ../../stat/normal_distribution.op" u (1/$1):14:15 w e notitle pt 4
