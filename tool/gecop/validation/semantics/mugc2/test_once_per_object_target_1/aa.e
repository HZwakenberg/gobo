class AA

create

	make

feature

	make
		do
			print (b.value)
			print ("%N")
			b.set_value (6)
			print (b.value)
			print ("%N")
		end

	b: BB
		once ("OBJECT")
			Result.set_value (5)
		end

end
