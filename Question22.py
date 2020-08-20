def transform(A):
	dict = {}

	for i, e in enumerate(A):
		dict[e] = i

	rank = 1

	for key in sorted(dict.keys()):
		A[dict.get(key)] = rank
		rank = rank + 1


if __name__ == '__main__':

	A = [10, 8, 15, 12, 6, 20, 1]
	print("Array: ")
	print(A)
	transform(A)
	print("Rank: ")
	print(A)
