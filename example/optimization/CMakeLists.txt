set(PROGS bisection_1d golden_section_1d nelder_mead_2d)
foreach(name ${PROGS})
  add_executable(${name} ${name}.cpp)
  add_iotest(${name} ${name})
endforeach(name)
