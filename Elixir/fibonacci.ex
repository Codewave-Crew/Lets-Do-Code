defmodule Fibonacci do
  def calc_fib(0), do: 0
  def calc_fib(1), do: 1
  def calc_fib(n), do: calc_fib(n-1) + calc_fib(n-2)
end

Fibonacci.calc_fib(9)
