indexing

	description:

		"Imported unicode routines"

	library: "Gobo Eiffel Kernel Library"
	copyright: "Copyright (c) 2001, Eric Bezault and others"
	license: "Eiffel Forum License v1 (see forum.txt)"
	date: "$Date$"
	revision: "$Revision$"

class UC_IMPORTED_UNICODE_ROUTINES

feature -- Access

	unicode: UC_UNICODE_ROUTINES is
			-- Unicode routines
		once
			!! Result
		ensure
			unicode_not_void: Result /= Void
		end

end
