def main():
    import sys

    def process_lines(lines, index, results):
        if index >= len(lines):
            return results

        if index + 1 >= len(lines):
            results.append(-1)
            return results

        try:
            x = int(lines[index])
            y_line = lines[index + 1].strip()
            y_strs = y_line.split()
            y_nums = list(map(int, y_strs))
        except:
            results.append(-1)
            return process_lines(lines, index + 2, results)

        if len(y_nums) != x:
            results.append(-1)
        else:
            def power_of_four_sum(yns):
                if not yns:
                    return 0
                head, *tail = yns
                add = (head ** 4) if head <= 0 else 0
                return add + power_of_four_sum(tail)

            results.append(power_of_four_sum(y_nums))

        return process_lines(lines, index + 2, results)

    input_lines = sys.stdin.read().splitlines()
    if not input_lines:
        return

    try:
        n = int(input_lines[0])
    except:
        return

    final_results = process_lines(input_lines[1:], 0, [])   
    for r in final_results[:n]:
        print(r)


if __name__ == "__main__":
    main()
