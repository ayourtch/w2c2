
#include <stdio.h>
#include "w2c2_base.h"
#include "test.h"
#include "test_float_exprs.69.h"

void test() {
    floatexprs69Instance instance;
    floatexprs69Instantiate(&instance, resolveTestImports);
    printStart("float_exprs.69.wasm");
    assertEqualF32(
        floatexprs69_f32X2EnoX5FfoldX5FmulX5Fdivs(&instance, -2.723473290390395e-33, 3.8978429106441753e-28, 4.8471230913214525e-27, -25.35777473449707),
        1.3355854774737518e-33,
        "f32.no_fold_mul_divs(-2.723473290390395e-33, 3.8978429106441753e-28, 4.8471230913214525e-27, -25.35777473449707)"
    );
    assertEqualF32(
        floatexprs69_f32X2EnoX5FfoldX5FmulX5Fdivs(&instance, -5.372844131686042e+30, 38340912.0, 1.4973162251408212e-05, 0.19213825464248657),
        -1.0920474831396798e+19,
        "f32.no_fold_mul_divs(-5.372844131686042e+30, 38340912.0, 1.4973162251408212e-05, 0.19213825464248657)"
    );
    assertEqualF32(
        floatexprs69_f32X2EnoX5FfoldX5FmulX5Fdivs(&instance, -16085042176.0, -1092920213504.0, -869606016.0, -1201.2060546875),
        10654.638671875,
        "f32.no_fold_mul_divs(-16085042176.0, -1092920213504.0, -869606016.0, -1201.2060546875)"
    );
    assertEqualF32(
        floatexprs69_f32X2EnoX5FfoldX5FmulX5Fdivs(&instance, -1.2712231404391021e+33, 1.0768114178105748e-10, 1.857627103163395e-05, 4.9268619715816126e+23),
        -INFINITY,
        "f32.no_fold_mul_divs(-1.2712231404391021e+33, 1.0768114178105748e-10, 1.857627103163395e-05, 4.9268619715816126e+23)"
    );
    assertEqualF32(
        floatexprs69_f32X2EnoX5FfoldX5FmulX5Fdivs(&instance, 1.3783863765364776e-16, -6.504628450864499e-20, 6.816768371365373e-28, 2.2892627030146606e-11),
        -6.310029538811324e-14,
        "f32.no_fold_mul_divs(1.3783863765364776e-16, -6.504628450864499e-20, 6.816768371365373e-28, 2.2892627030146606e-11)"
    );
    assertEqualF64(
        floatexprs69_f64X2EnoX5FfoldX5FmulX5Fdivs(&instance, -3.466499805233369e-247, -4.045567512248635e-140, -6.462341070607592e+164, 1.0045589533354074e+56),
        -55.12215321310017,
        "f64.no_fold_mul_divs(-3.466499805233369e-247, -4.045567512248635e-140, -6.462341070607592e+164, 1.0045589533354074e+56)"
    );
    assertEqualF64(
        floatexprs69_f64X2EnoX5FfoldX5FmulX5Fdivs(&instance, -5.054883907636325e+34, 2.2223781649976275e-277, -1.5029790371100852e+109, -6.994123759538121e+140),
        -INFINITY,
        "f64.no_fold_mul_divs(-5.054883907636325e+34, 2.2223781649976275e-277, -1.5029790371100852e+109, -6.994123759538121e+140)"
    );
    assertEqualF64(
        floatexprs69_f64X2EnoX5FfoldX5FmulX5Fdivs(&instance, -8.361116536344947e+92, -1.0029528876067567e+58, -1.2867801766038772e-42, -4.2230277746883753e+220),
        2.540178100556387e-228,
        "f64.no_fold_mul_divs(-8.361116536344947e+92, -1.0029528876067567e+58, -1.2867801766038772e-42, -4.2230277746883753e+220)"
    );
    assertEqualF64(
        floatexprs69_f64X2EnoX5FfoldX5FmulX5Fdivs(&instance, -1.2020032116411193e+39, -4.667409771338769e-105, 1.0888652376540085e-288, 1.8334948666517216e+67),
        0.0,
        "f64.no_fold_mul_divs(-1.2020032116411193e+39, -4.667409771338769e-105, 1.0888652376540085e-288, 1.8334948666517216e+67)"
    );
    assertEqualF64(
        floatexprs69_f64X2EnoX5FfoldX5FmulX5Fdivs(&instance, 6.331839568840419e-06, 5.544474241905778e-84, 2.7822472480359097e-187, -1.4419321081893022e+106),
        -2.2035374770746518e-215,
        "f64.no_fold_mul_divs(6.331839568840419e-06, 5.544474241905778e-84, 2.7822472480359097e-187, -1.4419321081893022e+106)"
    );
}