defmodule BinarySearch do
  def binary_search(lst, target), do: binary_search(lst, target, 0, length(lst))

  def binary_search(_, _, min, stop) when min > stop, do: -1

  def binary_search(lst, target, min, stop) do
      middle = (min + stop) |> div(2) # Breaks list on the middle
      curr_value = Enum.at(lst, middle)

      cond do
        curr_value == target -> middle # found! Return the index
        curr_value > target -> binary_search(lst, target, min, middle - 1) # Runs the left fragment portion of the list
        curr_value < target -> binary_search(lst, target, middle + 1, stop) # Runs the right fragment portion of the list
      end
    end
  end

  BinarySearch.binary_search([1, 2, 3, 4, 5, 6, 7], 10)
