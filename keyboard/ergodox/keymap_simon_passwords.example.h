case MACRO_PASSWORD1:
    return MACRO( D(LSFT), T(H), U(LSFT), T(E), T(L), T(L), T(O), T(DOT), T(W), T(O), T(R), T(L), T(D), T(ENTER), END); // types "Hello.world{ENTER}"

/*
VIM commands to make this easier to generate
-- Dvorak translate:
call setline(line('.'), tr(getline('.'), 'axje.uidchtnmbrl poygk,qf;svwAXJE.UIDCHTNMBRL POYGK,QF;SVW', 'abcdefghijklmnopqrstuvwxyz;.,ABCDEFGHIJKLMNOPQRSTUVWXYZ:<>'))
-- Macro-ify:
s/./T(&), /g|s/T([A-Z])/D(LSFT), &, U(LSFT)/|s/[a-z]/\U&/g|norm I	return MACRO(AT(ENTER), END);
*/
