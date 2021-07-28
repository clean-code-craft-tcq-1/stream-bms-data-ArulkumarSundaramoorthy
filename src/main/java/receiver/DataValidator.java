package receiver;

import java.util.Collections;
import java.util.List;

public class DataValidator {
	public static Float getMaxValueFromParamList(List<Float> paramList) {

		if (!isValidList(paramList))
			return 0.0F;

		return Collections.max(paramList);
	}

	public static Float getMinValueFromParamList(List<Float> paramList) {

		if (!isValidList(paramList))
			return 0.0F;

		return Collections.min(paramList);
	}

	public static Float getAverageFromParamList(List<Float> paramList) {

		if (!isValidList(paramList))
			return 0.0F;

		List<Float> filteredParamList = separateLastFiveValues(paramList);
		Float sum = filteredParamList.parallelStream().reduce(0.0F, Float::sum);
		float average = Math.round(sum / filteredParamList.size() * 100.0F);
		
		return (float) (average / 100.0F);
	}

	public static boolean isValidList(List<Float> paramList) {

		if (paramList == null || paramList.isEmpty()) {
			return false;
		}
		return true;
	}

	private static List<Float> separateLastFiveValues(List<Float> paramList) {

		if (paramList.size() >= 5)
			return paramList.subList(paramList.size() - 5, paramList.size());
		return paramList;
	}
}
