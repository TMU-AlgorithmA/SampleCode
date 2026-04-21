using DifferentialEquations
using Plots

function vf(z) # Definition of the vector field
    return [z[1]*(1-z[1]^2); -z[2]] 
end

function main()
    init = [0.0001; -1.0] # Initial condition
    tspan = (0.0, 16.0) # Time span
    prob = ODEProblem((u,p,t)->vf(u), init, tspan)
    sol = solve(prob, Tsit5(), reltol=1e-8, abstol=1e-8)
    plot(stack(sol.u)[1,:],stack(sol.u)[2,:])
end

main()
