class EE

create

	make

feature

	make (a_b: separate BB)
		do
			b := a_b
		end
	
	b: separate BB

	g
		do
			f (b, b)
		end

	f (a_b1: separate BB; a_b2: separate BB)
		do
			{EXECUTION_ENVIRONMENT}.sleep (50_000_000)
			print ("EE start f%N")
			{EXECUTION_ENVIRONMENT}.sleep (50_000_000)
			a_b2.f ("EE")
			print ("EE middle f%N")
			a_b1.f ("EE")
			print ("EE end f%N")
		end

end
