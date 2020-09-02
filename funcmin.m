fun = @sin;
x1 = -2;
x2 = 2;
options = optimset('TolX',10e-6,'Display','iter');
x = fminbnd(fun,x1,x2,options);
