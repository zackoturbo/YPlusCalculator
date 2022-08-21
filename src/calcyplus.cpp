#include "../include/calcyplus.h"
#include <cmath>
#include <iostream>

output calcYPlus(int yplus, double c, std::string fluid, double length)
{
    

    double c_f = 0; // friction coefficient after Schlichting & Gersten
    double tau_w = 0; // Shear Stress 
    double u_tau = 0; // Friction Velocity
    
    double rho;
    double visc_dyn;

    output OP;


    if (fluid == "H2O")
    {
        rho = 997; // @25 °C
        visc_dyn = 8.9 * pow(10, -4);
    }
    else if (fluid == "Air")
    {
        rho = 1.168; // @25 °C
        visc_dyn = 18.6 * pow(10, -6);
    }
    else
    {
        std::cout << "WRONG FLUID ENTERED - TRY AGAIN" << "\n";
    };


    OP.Re = rho * c * length / visc_dyn;
    c_f = pow((2*log10(OP.Re) -0.65),(-2.3));

    tau_w = 0.5 * rho * c_f * pow(c,2);
    u_tau = sqrt(tau_w/rho);

    OP.y = yplus * visc_dyn /(rho * u_tau);

    return OP;

};



