import csv
import time


def main():
	print("\n")
	print("=========Dashboard=========")
	print("\n")
	print("1. Search by Column Attribute")
	print("2. Sort by Column Attribute")
	print("3. exit\n\n")

	try:
		flag = int(input("Enter you choice: "))
		if flag == 1:
			print("1. Search by Age")
			print("2. Search by Gender")
			print("3. Search by Constrictive pericarditis (CP)")
			print("4. Search by trtbps")
			print("5. Search by Cholestero (chol)")
			print("6. Search by fbs - fasting blood sugar")
			print("7. Search by restecg")
			print("8. Search by thalachh")
			print("9. Search by exng")
			print("10. Search by oldpeak")
			print("11. Search by slp")
			print("12. Search by caa")
			print("13. Search by thall")
			print("14. Search by output\n\n")

			search = int(input("Enter you choice: "))

			if search == 1:
				search_by_age()
			elif search == 2:
				search_by_gender()
			elif search == 3:
				search_by_cp()
			elif search == 4:
				search_by_trtbps()
			elif search == 5:
				search_by_chol()
			elif search == 6:
				search_by_fbs()
			elif search == 7:
				search_by_restecg()
			elif search == 8:
				search_by_thalachh()
			elif search == 9:
				search_by_exng()
			elif search == 10:
				search_by_oldpeak()
			elif search == 11:
				search_by_slp()
			elif search == 12:
				search_by_caa()
			elif search == 13:
				search_by_thall()
			elif search == 14:
				search_by_output()
			else:
				print("Wrong Input!!! Try Again")
			main()

		elif flag == 2:
			print("1. Sort by Age")
			print("2. Sort by Gender")
			print("3. Sort by Constrictive pericarditis (CP)")
			print("4. Sort by trtbps")
			print("5. Sort by Cholestero (chol)")
			print("6. Sort by fbs - fasting blood sugar")
			print("7. Sort by restecg")
			print("8. Sort by thalachh")
			print("9. Sort by exng")
			print("10. Sort by oldpeak")
			print("11. Sort by slp")
			print("12. Sort by caa")
			print("13. Sort by thall")
			print("14. Sort by output")

			# sort operation
			global sort
			sort = int(input("Enter you choice: "))

			csv_file = open('heart.csv', 'r')
			file = csv.reader(csv_file)
			data = []
			for row in file:
				data.append(row)
			column_attribute = data.pop(0)


			if order == 1:
				data.sort(key=sort_by_column)
				print(column_attribute)
				for row in data:
					print(row)


		elif flag == 3:
			exit()
		else:
			print("Wrong Input!!! Try Again")
		main()
	except ValueError:
		print("Input Value Error!!! Try Again")
		main()



# search operation functions


def search_by_age():
	age = input('Enter the Age: ')
	start_time = time.time()
	file = csv.reader(open('heart.csv'))

	for row in file:
		if age == row[0]:
			print(row)
	print("\n---Processing Time: %s seconds ---" % (time.time() - start_time))
	main()


def search_by_gender():
	sex = input('Enter the Gender(0/1): ')
	start_time = time.time()
	file = csv.reader(open('heart.csv'))

	for row in file:
		if sex == row[1]:
			print(row)
	print("\n---Processing Time: %s seconds ---" % (time.time() - start_time))
	main()


def search_by_cp():
	cp = input('Enter the CP: ')
	start_time = time.time()
	file = csv.reader(open('heart.csv'))

	for row in file:
		if cp == row[2]:
			print(row)
	print("\n---Processing Time: %s seconds ---" % (time.time() - start_time))
	main()


def search_by_trtbps():
	trtbps = input('Enter the trtbps: ')
	start_time = time.time()
	file = csv.reader(open('heart.csv'))

	for row in file:
		if trtbps == row[3]:
			print(row)
	print("\n---Processing Time: %s seconds ---" % (time.time() - start_time))
	main()


def search_by_chol():
	chol = input('Enter the chol: ')
	start_time = time.time()
	file = csv.reader(open('heart.csv'))

	for row in file:
		if chol == row[4]:
			print(row)
	print("\n---Processing Time: %s seconds ---" % (time.time() - start_time))
	main()


def search_by_fbs():
	fbs = input('Enter the fbs: ')
	start_time = time.time()
	file = csv.reader(open('heart.csv'))

	for row in file:
		if fbs == row[5]:
			print(row)
	print("\n---Processing Time: %s seconds ---" % (time.time() - start_time))
	main()


def search_by_restecg():
	restecg = input('Enter the restecg: ')
	start_time = time.time()
	file = csv.reader(open('heart.csv'))

	for row in file:
		if restecg == row[6]:
			print(row)
	print("\n---Processing Time: %s seconds ---" % (time.time() - start_time))
	main()


def search_by_thalachh():
	thalachh = input('Enter the thalachh: ')
	start_time = time.time()
	file = csv.reader(open('heart.csv'))

	for row in file:
		if thalachh == row[7]:
			print(row)
	print("\n---Processing Time: %s seconds ---" % (time.time() - start_time))
	main()


def search_by_exng():
	exng = input('Enter the exng: ')
	start_time = time.time()
	file = csv.reader(open('heart.csv'))

	for row in file:
		if exng == row[8]:
			print(row)
	print("\n---Processing Time: %s seconds ---" % (time.time() - start_time))
	main()


def search_by_oldpeak():
	oldpeak = input('Enter the oldpeak: ')
	start_time = time.time()
	file = csv.reader(open('heart.csv'))

	for row in file:
		if oldpeak == row[9]:
			print(row)
	print("\n---Processing Time: %s seconds ---" % (time.time() - start_time))
	main()


def search_by_slp():
	slp = input('Enter the slp: ')
	start_time = time.time()
	file = csv.reader(open('heart.csv'))

	for row in file:
		if slp == row[10]:
			print(row)
	print("\n---Processing Time: %s seconds ---" % (time.time() - start_time))
	main()


def search_by_caa():
	caa = input('Enter the caa: ')
	start_time = time.time()
	file = csv.reader(open('heart.csv'))

	for row in file:
		if caa == row[11]:
			print(row)
	print("\n---Processing Time: %s seconds ---" % (time.time() - start_time))
	main()


def search_by_thall():
	thall = input('Enter the thall: ')
	start_time = time.time()
	file = csv.reader(open('heart.csv'))

	for row in file:
		if thall == row[12]:
			print(row)
	print("\n---Processing Time: %s seconds ---" % (time.time() - start_time))
	main()


def search_by_output():
	output = input('Enter the output: ')
	start_time = time.time()
	file = csv.reader(open('heart.csv'))

	for row in file:
		if output == row[13]:
			print(row)
	print("\n---Processing Time: %s seconds ---" % (time.time() - start_time))
	main()


main()
