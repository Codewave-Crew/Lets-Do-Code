-- Function to find the index of the minimum element in a list
findMinIndex :: (Ord a) => [a] -> Int
findMinIndex [] = error "Empty list"
findMinIndex [x] = 0
findMinIndex (x:xs)
    | x < minTail = 0
    | otherwise = 1 + minTailIndex
    where
        minTailIndex = findMinIndex xs
        minTail = xs !! minTailIndex

-- Function to perform selection sort
selectionSort :: (Ord a) => [a] -> [a]
selectionSort [] = []
selectionSort xs = minElement : selectionSort rest
    where
        minIndex = findMinIndex xs
        minElement = xs !! minIndex
        rest = take minIndex xs ++ drop (minIndex + 1) xs

-- Example of usage:
main = do
    let unsortedList = [64, 25, 12, 22, 11]
    putStrLn ("Unsorted List: " ++ show unsortedList)
    let sortedList = selectionSort unsortedList
    putStrLn ("Sorted List: " ++ show sortedList)