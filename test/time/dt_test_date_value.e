indexing

	description:

		"Test features of class DT_DATE_VALUE"

	library:    "Gobo Eiffel Time Library"
	author:     "Eric Bezault <ericb@gobosoft.com>"
	copyright:  "Copyright (c) 2000, Eric Bezault and others"
	license:    "Eiffel Forum Freeware License v1 (see forum.txt)"
	date:       "$Date$"
	revision:   "$Revision$"

deferred class DT_TEST_DATE_VALUE

inherit

	TS_TEST_CASE
	KL_IMPORTED_STRING_ROUTINES

feature -- Test

	test_year_month_day is
			-- Test features `year', `month' and `day' of class DT_DATE_VALUE.
		local
			dv: DT_DATE_VALUE
		do
			!DT_DATE! dv.make (2000, 3, 24)
			assert_equal ("year1", 2000, dv.year)
			assert_equal ("month1", 3, dv.month)
			assert_equal ("day1", 24, dv.day)
			!DT_DATE! dv.make (-50, 12, 4)
			assert_equal ("year2", -50, dv.year)
			assert_equal ("month2", 12, dv.month)
			assert_equal ("day2", 4, dv.day)
			!DT_DATE_DURATION! dv.make (10, 5, 58)
			assert_equal ("year3", 10, dv.year)
			assert_equal ("month3", 5, dv.month)
			assert_equal ("day3", 58, dv.day)
			!DT_DATE_DURATION! dv.make (-2, 40, -23)
			assert_equal ("year4", -2, dv.year)
			assert_equal ("month4", 40, dv.month)
			assert_equal ("day4", -23, dv.day)
			!DT_DATE_TIME! dv.make_precise (1967, 5, 17, 6, 30, 15, 123)
			assert_equal ("year5", 1967, dv.year)
			assert_equal ("month5", 5, dv.month)
			assert_equal ("day5", 17, dv.day)
			!DT_DATE_TIME! dv.make_precise (-156, 8, 16, 23, 12, 3, 2)
			assert_equal ("year6", -156, dv.year)
			assert_equal ("month6", 8, dv.month)
			assert_equal ("day6", 16, dv.day)
			!DT_DATE_TIME_DURATION! dv.make_precise (3, -12, 123, 23, -3, 12, -45)
			assert_equal ("year7", 3, dv.year)
			assert_equal ("month7", -12, dv.month)
			assert_equal ("day7", 123, dv.day)
			!DT_DATE_TIME_DURATION! dv.make_precise (0, 3, 2, 0, 4, 3, 456) 
			assert_equal ("year8", 0, dv.year)
			assert_equal ("month8", 3, dv.month)
			assert_equal ("day8", 2, dv.day)
		end

	test_out is
			-- Test feature `out' of class DT_DATE_VALUE.
		local
			dv: DT_DATE_VALUE
		do
			!DT_DATE! dv.make (2000, 3, 24)
			assert_equal ("out1", "2000/03/24", dv.out)
			!DT_DATE! dv.make (-50, 12, 4)
			assert_equal ("out2", "-50/12/04", dv.out)
			!DT_DATE_DURATION! dv.make (10, 5, 58)
			assert_equal ("out3", "10/5/58", dv.out)
			!DT_DATE_DURATION! dv.make (-2, 40, -23)
			assert_equal ("out4", "-2/40/-23", dv.out)
			!DT_DATE_TIME! dv.make_precise (1967, 5, 17, 6, 30, 15, 123)
			assert_equal ("out5", "1967/05/17 06:30:15.123", dv.out)
			!DT_DATE_TIME! dv.make_precise (-156, 8, 16, 23, 12, 3, 2)
			assert_equal ("out6", "-156/08/16 23:12:03.002", dv.out)
			!DT_DATE_TIME_DURATION! dv.make_precise (3, -12, 123, 23, -3, 12, -45)
			assert_equal ("out7", "3/-12/123 23:-3:12.-45", dv.out)
			!DT_DATE_TIME_DURATION! dv.make_precise (0, 3, 2, 0, 4, 3, 456) 
			assert_equal ("out8", "0/3/2 0:4:3.456", dv.out)
		end

	test_date_out is
			-- Test feature `date_out' of class DT_DATE_VALUE.
		local
			dv: DT_DATE_VALUE
		do
			!DT_DATE! dv.make (2000, 3, 24)
			assert_equal ("date_out1", "2000/03/24", dv.date_out)
			!DT_DATE! dv.make (-50, 12, 4)
			assert_equal ("date_out2", "-50/12/04", dv.date_out)
			!DT_DATE_DURATION! dv.make (10, 5, 58)
			assert_equal ("date_out3", "10/5/58", dv.date_out)
			!DT_DATE_DURATION! dv.make (-2, 40, -23)
			assert_equal ("date_out4", "-2/40/-23", dv.date_out)
			!DT_DATE_TIME! dv.make_precise (1967, 5, 17, 6, 30, 15, 123)
			assert_equal ("date_out5", "1967/05/17", dv.date_out)
			!DT_DATE_TIME! dv.make_precise (-156, 8, 16, 23, 12, 3, 2)
			assert_equal ("date_out6", "-156/08/16", dv.date_out)
			!DT_DATE_TIME_DURATION! dv.make_precise (3, -12, 123, 23, -3, 12, -45)
			assert_equal ("date_out7", "3/-12/123", dv.date_out)
			!DT_DATE_TIME_DURATION! dv.make_precise (0, 3, 2, 0, 4, 3, 456) 
			assert_equal ("date_out8", "0/3/2", dv.date_out)
		end

	test_append_to_string is
			-- Test feature `append_to_string' of class DT_DATE_VALUE.
		local
			dv: DT_DATE_VALUE
			a_string: STRING
		do
			!DT_DATE! dv.make (2000, 3, 24)
			a_string := STRING_.make (50)
			a_string.append_string ("G#")
			dv.append_to_string (a_string)
			assert_equal ("append_to_string1", "G#2000/03/24", a_string)

			!DT_DATE! dv.make (-50, 12, 4)
			a_string := STRING_.make (50)
			a_string.append_string ("G#")
			dv.append_to_string (a_string)
			assert_equal ("append_to_string2", "G#-50/12/04", a_string)

			!DT_DATE_DURATION! dv.make (10, 5, 58)
			a_string := STRING_.make (50)
			a_string.append_string ("G#")
			dv.append_to_string (a_string)
			assert_equal ("append_to_string3", "G#10/5/58", a_string)

			!DT_DATE_DURATION! dv.make (-2, 40, -23)
			a_string := STRING_.make (50)
			a_string.append_string ("G#")
			dv.append_to_string (a_string)
			assert_equal ("append_to_string4", "G#-2/40/-23", a_string)

			!DT_DATE_TIME! dv.make_precise (1967, 5, 17, 6, 30, 15, 123)
			a_string := STRING_.make (50)
			a_string.append_string ("G#")
			dv.append_to_string (a_string)
			assert_equal ("append_to_string5", "G#1967/05/17 06:30:15.123", a_string)

			!DT_DATE_TIME! dv.make_precise (-156, 8, 16, 23, 12, 3, 2)
			a_string := STRING_.make (50)
			a_string.append_string ("G#")
			dv.append_to_string (a_string)
			assert_equal ("append_to_string6", "G#-156/08/16 23:12:03.002", a_string)

			!DT_DATE_TIME_DURATION! dv.make_precise (3, -12, 123, 23, -3, 12, -45)
			a_string := STRING_.make (50)
			a_string.append_string ("G#")
			dv.append_to_string (a_string)
			assert_equal ("append_to_string7", "G#3/-12/123 23:-3:12.-45", a_string)

			!DT_DATE_TIME_DURATION! dv.make_precise (0, 3, 2, 0, 4, 3, 456) 
			a_string := STRING_.make (50)
			a_string.append_string ("G#")
			dv.append_to_string (a_string)
			assert_equal ("append_to_string8", "G#0/3/2 0:4:3.456", a_string)
		end

	test_append_date_to_string is
			-- Test feature `append_date_to_string' of class DT_DATE_VALUE.
		local
			dv: DT_DATE_VALUE
			a_string: STRING
		do
			!DT_DATE! dv.make (2000, 3, 24)
			a_string := STRING_.make (50)
			a_string.append_string ("G#")
			dv.append_date_to_string (a_string)
			assert_equal ("append_date_to_string1", "G#2000/03/24", a_string)

			!DT_DATE! dv.make (-50, 12, 4)
			a_string := STRING_.make (50)
			a_string.append_string ("G#")
			dv.append_date_to_string (a_string)
			assert_equal ("append_date_to_string2", "G#-50/12/04", a_string)

			!DT_DATE_DURATION! dv.make (10, 5, 58)
			a_string := STRING_.make (50)
			a_string.append_string ("G#")
			dv.append_date_to_string (a_string)
			assert_equal ("append_date_to_string3", "G#10/5/58", a_string)

			!DT_DATE_DURATION! dv.make (-2, 40, -23)
			a_string := STRING_.make (50)
			a_string.append_string ("G#")
			dv.append_date_to_string (a_string)
			assert_equal ("append_date_to_string4", "G#-2/40/-23", a_string)

			!DT_DATE_TIME! dv.make_precise (1967, 5, 17, 6, 30, 15, 123)
			a_string := STRING_.make (50)
			a_string.append_string ("G#")
			dv.append_date_to_string (a_string)
			assert_equal ("append_date_to_string5", "G#1967/05/17", a_string)

			!DT_DATE_TIME! dv.make_precise (-156, 8, 16, 23, 12, 3, 2)
			a_string := STRING_.make (50)
			a_string.append_string ("G#")
			dv.append_date_to_string (a_string)
			assert_equal ("append_date_to_string6", "G#-156/08/16", a_string)

			!DT_DATE_TIME_DURATION! dv.make_precise (3, -12, 123, 23, -3, 12, -45)
			a_string := STRING_.make (50)
			a_string.append_string ("G#")
			dv.append_date_to_string (a_string)
			assert_equal ("append_date_to_string7", "G#3/-12/123", a_string)

			!DT_DATE_TIME_DURATION! dv.make_precise (0, 3, 2, 0, 4, 3, 456) 
			a_string := STRING_.make (50)
			a_string.append_string ("G#")
			dv.append_date_to_string (a_string)
			assert_equal ("append_date_to_string8", "G#0/3/2", a_string)
		end

end -- class DT_TEST_DATE_VALUE
