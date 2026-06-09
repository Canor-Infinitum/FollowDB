# FOLLOWDB-Types.

## These define Numbers, Arbitraries and Lengths.

Definitions: (Real, Base)-Numbers, (Real, (Start, Stop), Base)-Arbitraries, and (Real, (Start, Stop), Base, Op)-Lengths:
	- number.h
	- arbitrary.h
	- length.h

## These are dualities of the number.h, arbitrary.h and the length.h files

Depending on scalar or array representations of REAL(s) / (START, STOP)(s) and/or BASE(s):
	- elementary.h
	- composite.h
	- unique.h
	- unknown.h

## Furthermore, Interval-based types are included for the REAL(s)

Depending on scalar or array representations of Interval-REAL(s) / (Interval-START, Interval-STOP)(s) and/or BASE(s):
	- unit.h
	- unity.h
	- uniter.h
	- unital.h
	- point.h
	- axis.h
	- composition.h
	- unbeknownst.h
All stored in a super-type within structure.h

## Atoms, Change & Force

Structure.h divides into three - based upon the variables being values, references or functionals:
	- atom.h
	- change.h
	- force.h

## Tensors of the former (atoms, change, force)

Stored in:
	- tensorial.h
	- tensor.h

## Symbolic Expressions generate Tensors.

Stored in:
	- expression.h

## Markov Chained Expressions generate Processes:

Stored in:
	- markov.h
	- chain.h
	- generator.h
	- process.h