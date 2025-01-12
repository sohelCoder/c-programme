#include <stdio.h>

int main() {
    char *names[100] = {
        "Alice", "Bob", "Charlie", "David", "Eva", "Frank", "Grace", "Hannah", "Ivy", "Jack",
        "Katie", "Louis", "Mia", "Nathan", "Olivia", "Paul", "Quincy", "Rachel", "Sam", "Tom",
        "Uma", "Vera", "William", "Xander", "Yara", "Zane", "Aaron", "Bella", "Caden", "Diana",
        "Eli", "Fiona", "George", "Helen", "Isaac", "James", "Kara", "Liam", "Mason", "Nina",
        "Oscar", "Penny", "Quinn", "Reed", "Sophia", "Travis", "Ursula", "Vince", "Walter", "Xena",
        "Yasmine", "Zoe", "Amos", "Becky", "Carl", "Darren", "Emily", "Felix", "Gina", "Holly",
        "Ian", "Janet", "Kyle", "Laura", "Mike", "Nora", "Olga", "Peter", "Quincy", "Rachel",
        "Steve", "Tina", "Ursula", "Victor", "Wendy", "Xander", "Yvonne", "Zara", "Alex", "Brianna",
        "Chris", "Doris", "Erik", "Frankie", "Gage", "Hilda", "Irving", "Judy", "Kyle", "Lori",
        "Max", "Nancy", "Oscar", "Patricia", "Quincy", "Rita", "Sean", "Toby", "Umar", "Vera",
        "Wesley", "Xander", "Yana", "Zack", "Adam", "Beth", "Cameron", "Donna", "Edward", "Fiona"
    };

    for (int i = 0; i < 100; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}
