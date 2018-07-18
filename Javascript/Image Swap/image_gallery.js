$(document).ready(function() {
    $("#image_list img").each(function() {
        var urlActual = $(this).attr("src");
        var urlNew = $(this).attr("title");

        var preloadImage = new Image();
        preloadImage.src = urlNew;
    });
        
        $("#image_list a").click(function (evt) {
                var imageUrl = $(this).attr("href");
                $("#image").attr("src", imageUrl);

                var imageCaption = $(this).attr("title");
                $("#caption").text(imageCaption);

                evt.preventDefault();
            }
        );

        $("li:first-child a").focus();

});