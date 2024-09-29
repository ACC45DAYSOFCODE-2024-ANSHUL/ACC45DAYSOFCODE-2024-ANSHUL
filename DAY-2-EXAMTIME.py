# cook your dish here
def determine_ranks(test_cases):
    results = []
    for dragon_scores, sloth_scores in test_cases:
        # Calculate total scores
        dragon_total = sum(dragon_scores)
        sloth_total = sum(sloth_scores)
        
        if dragon_total > sloth_total:
            results.append("Dragon")
        elif sloth_total > dragon_total:
            results.append("Sloth")
        else:  # totals are tied
            if dragon_scores[0] > sloth_scores[0]:  # DSA scores
                results.append("Dragon")
            elif sloth_scores[0] > dragon_scores[0]:
                results.append("Sloth")
            else:  # DSA scores are tied
                if dragon_scores[1] > sloth_scores[1]:  # TOC scores
                    results.append("Dragon")
                elif sloth_scores[1] > dragon_scores[1]:
                    results.append("Sloth")
                else:
                    results.append("Tie")  # Everything is tied
    return results

# Read input
T = int(input())
test_cases = []
for _ in range(T):
    dragon_scores = list(map(int, input().split()))
    sloth_scores = list(map(int, input().split()))
    test_cases.append((dragon_scores, sloth_scores))

# Get results
results = determine_ranks(test_cases)

# Print results
for result in results:
    print(result)
