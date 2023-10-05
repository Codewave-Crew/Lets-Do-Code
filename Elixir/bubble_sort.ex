defmodule BubbleSort do
  def bubble_sort(list) do
    curr_list = sort(list)

    case curr_list do
      curr_list -> curr_list
      _ -> bubble_sort(curr_list)
    end
  end

  def sort([x, y | curr_list]) when x > y, do: [y | sort([x | curr_list])]
  def sort([x, y | curr_list]), do: [x | sort([y | curr_list])]
  def sort(list), do: list
end

BubbleSort.bubble_sort([3, 5, 2, 6, 6, 6])
