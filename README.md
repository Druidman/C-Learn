# Resources 

`https://cpp-primer.pages.dev`

# Issues I encountered

## 1
 
In the `Chapter1/flow of control` Is paragraph 1.4.4 there is a program.
The goal is to get all number from input (`std::cin`) and count how many times each of the numbers occurs.
I coded it by myself and it wouldn't print a counter of the last value.
So I was making lots of checks and just couldn't find the reason until...
I copied code from the website and it gave me the same output!
I thought about this and it turns out that it would't print counters because it was stuck in the `while` loop waiting for `std::cin >> currVal` to return something. 


# Thanks for viewing this repo